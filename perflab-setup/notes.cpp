double
applyFilter(struct Filter *filter, cs1300bmp *input, cs1300bmp *output)
{

  long long cycStart, cycStop;

  cycStart = rdtscll();

  output -> width = input -> width;
  output -> height = input -> height;
   
    // created new varialbes, so calulations dont need to run for every loop instance.
    
    
  for(int col = 1; col < (input -> width) - 1; col = col + 1) {    // changed to col ++ and row ++
    for(int row = 1; row < (input -> height) - 1; row = row + 1) { // loop through rows
      for(int plane = 0; plane < 3; plane++) {                      // loop through plane??

	output -> color[plane][row][col] = 0;

	for (int j = 0; j < filter -> getSize(); j++) {             //took out filter -> getSize() and replace with local variab
	  for (int i = 0; i < filter -> getSize(); i++) {	
	    output -> color[plane][row][col] = 
            output -> color[plane][row][col] + (input -> color[plane][row + i - 1][col + j - 1]  * filter -> get(i, j) );
	  }
	}
	
	output -> color[plane][row][col] = 	
	  output -> color[plane][row][col] / filter -> getDivisor();

	if ( output -> color[plane][row][col]  < 0 ) {
	  output -> color[plane][row][col] = 0;
	}

	if ( output -> color[plane][row][col]  > 255 ) { 
	  output -> color[plane][row][col] = 255;
	}
      }
    }
  }

  cycStop = rdtscll();
  double diff = cycStop - cycStart;
  double diffPerPixel = diff / (output -> width * output -> height);
  fprintf(stderr, "Took %f cycles to process, or %f cycles per pixel\n",
	  diff, diff / (output -> width * output -> height));
  return diffPerPixel;
}








double
applyFilter(struct Filter *filter, cs1300bmp *input, cs1300bmp *output)
{

  long long cycStart, cycStop;

  cycStart = rdtscll();

  output -> width = input -> width;
  output -> height = input -> height;
  
// created variables, so calculations do not need to ran every instance of the loops
   int new_width = (input -> width) - 1; 
   int new_height = (input -> height) - 1;
    
   int filter_size = filter -> getSize(); 
   int divisor = filter -> getDivisor();
   int plane, row, col, i, j;

    
    /* Swapped the nested loops to better coinside with color. 
       This helps with fetching elements contingously from memory. 
       allows for better locality
    */
  for(plane = 0; plane < 3; ++plane){      
    for(row = 1; row < new_height; row++){
     for(col = 1; col < new_width; col++){

	int sum = 0;

   	for (i = 0; i < filter_size; i++) {   //loop through filters
	  for (j = 0; j < filter_size; j++) {	
	   sum += (input -> color[plane][row + i - 1][col + j - 1]  * filter -> get(i, j) );
    
	  }
	}      
         
	sum /= divisor;
   
	if ( sum  < 0 ) {
	   sum = 0;
	}

	if ( sum  > 255 ) { 
	  sum = 255;
	}
        
    output -> color[plane][row][col] = sum;
//     output -> color[plane][row][col] = 0;
         
// 	for (i = 0 ; i < filter_size; i++) {   //loop through filters
// 	  for (j = 0 ; j < filter_size; j++) {	
//         output -> color[plane][row][col] += (input -> color[plane][row + i - 1][col + j - 1]  * filter -> get(i, j));
    
// 	  }
// 	}
	

// 	output -> color[plane][row][col] /= divisor;
   
// 	if ( output -> color[plane][row][col]  < 0 ) {
// 	  output -> color[plane][row][col] = 0;
// 	}

// 	if ( output -> color[plane][row][col]  > 255 ) { 
// 	  output -> color[plane][row][col] = 255;
// 	}
      }
    }
  }

  cycStop = rdtscll();
  double diff = cycStop - cycStart;
  double diffPerPixel = diff / (output -> width * output -> height);
  fprintf(stderr, "Took %f cycles to process, or %f cycles per pixel\n",
	  diff, diff / (output -> width * output -> height));
  return diffPerPixel;
}