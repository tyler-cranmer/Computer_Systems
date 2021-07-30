
farm.o:     file format elf64-x86-64


Disassembly of section .text:

0000000000000000 <start_farm>:
   0:	f3 0f 1e fa          	endbr64 
   4:	55                   	push   %rbp
   5:	48 89 e5             	mov    %rsp,%rbp
   8:	b8 01 00 00 00       	mov    $0x1,%eax
   d:	5d                   	pop    %rbp
   e:	c3                   	retq   

000000000000000f <getval_465>:
   f:	f3 0f 1e fa          	endbr64 
  13:	55                   	push   %rbp
  14:	48 89 e5             	mov    %rsp,%rbp
  17:	b8 4c 89 c7 c3       	mov    $0xc3c7894c,%eax
  1c:	5d                   	pop    %rbp
  1d:	c3                   	retq   

000000000000001e <setval_137>:
  1e:	f3 0f 1e fa          	endbr64 
  22:	55                   	push   %rbp
  23:	48 89 e5             	mov    %rsp,%rbp
  26:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  2a:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  2e:	c7 00 48 89 c7 90    	movl   $0x90c78948,(%rax)
  34:	90                   	nop
  35:	5d                   	pop    %rbp
  36:	c3                   	retq   

0000000000000037 <setval_365>:
  37:	f3 0f 1e fa          	endbr64 
  3b:	55                   	push   %rbp
  3c:	48 89 e5             	mov    %rsp,%rbp
  3f:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  43:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  47:	c7 00 48 89 c7 92    	movl   $0x92c78948,(%rax)
  4d:	90                   	nop
  4e:	5d                   	pop    %rbp
  4f:	c3                   	retq   

0000000000000050 <setval_123>:
  50:	f3 0f 1e fa          	endbr64 
  54:	55                   	push   %rbp
  55:	48 89 e5             	mov    %rsp,%rbp
  58:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  5c:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  60:	c7 00 08 58 90 90    	movl   $0x90905808,(%rax)
  66:	90                   	nop
  67:	5d                   	pop    %rbp
  68:	c3                   	retq   

0000000000000069 <addval_307>:
  69:	f3 0f 1e fa          	endbr64 
  6d:	55                   	push   %rbp
  6e:	48 89 e5             	mov    %rsp,%rbp
  71:	89 7d fc             	mov    %edi,-0x4(%rbp)
  74:	8b 45 fc             	mov    -0x4(%rbp),%eax
  77:	2d 67 a7 6f 3c       	sub    $0x3c6fa767,%eax
  7c:	5d                   	pop    %rbp
  7d:	c3                   	retq   

000000000000007e <getval_165>:
  7e:	f3 0f 1e fa          	endbr64 
  82:	55                   	push   %rbp
  83:	48 89 e5             	mov    %rsp,%rbp
  86:	b8 6e 50 c3 ce       	mov    $0xcec3506e,%eax
  8b:	5d                   	pop    %rbp
  8c:	c3                   	retq   

000000000000008d <addval_115>:
  8d:	f3 0f 1e fa          	endbr64 
  91:	55                   	push   %rbp
  92:	48 89 e5             	mov    %rsp,%rbp
  95:	89 7d fc             	mov    %edi,-0x4(%rbp)
  98:	8b 45 fc             	mov    -0x4(%rbp),%eax
  9b:	2d b8 76 38 6f       	sub    $0x6f3876b8,%eax
  a0:	5d                   	pop    %rbp
  a1:	c3                   	retq   

00000000000000a2 <addval_273>:
  a2:	f3 0f 1e fa          	endbr64 
  a6:	55                   	push   %rbp
  a7:	48 89 e5             	mov    %rsp,%rbp
  aa:	89 7d fc             	mov    %edi,-0x4(%rbp)
  ad:	8b 45 fc             	mov    -0x4(%rbp),%eax
  b0:	2d fc ff a7 6e       	sub    $0x6ea7fffc,%eax
  b5:	5d                   	pop    %rbp
  b6:	c3                   	retq   

00000000000000b7 <mid_farm>:
  b7:	f3 0f 1e fa          	endbr64 
  bb:	55                   	push   %rbp
  bc:	48 89 e5             	mov    %rsp,%rbp
  bf:	b8 01 00 00 00       	mov    $0x1,%eax
  c4:	5d                   	pop    %rbp
  c5:	c3                   	retq   

00000000000000c6 <add_xy>:
  c6:	f3 0f 1e fa          	endbr64 
  ca:	55                   	push   %rbp
  cb:	48 89 e5             	mov    %rsp,%rbp
  ce:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  d2:	48 89 75 f0          	mov    %rsi,-0x10(%rbp)
  d6:	48 8b 55 f8          	mov    -0x8(%rbp),%rdx
  da:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
  de:	48 01 d0             	add    %rdx,%rax
  e1:	5d                   	pop    %rbp
  e2:	c3                   	retq   

00000000000000e3 <setval_154>:
  e3:	f3 0f 1e fa          	endbr64 
  e7:	55                   	push   %rbp
  e8:	48 89 e5             	mov    %rsp,%rbp
  eb:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
  ef:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
  f3:	c7 00 89 d1 20 db    	movl   $0xdb20d189,(%rax)
  f9:	90                   	nop
  fa:	5d                   	pop    %rbp
  fb:	c3                   	retq   

00000000000000fc <setval_377>:
  fc:	f3 0f 1e fa          	endbr64 
 100:	55                   	push   %rbp
 101:	48 89 e5             	mov    %rsp,%rbp
 104:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 108:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 10c:	c7 00 8d c2 38 d2    	movl   $0xd238c28d,(%rax)
 112:	90                   	nop
 113:	5d                   	pop    %rbp
 114:	c3                   	retq   

0000000000000115 <getval_239>:
 115:	f3 0f 1e fa          	endbr64 
 119:	55                   	push   %rbp
 11a:	48 89 e5             	mov    %rsp,%rbp
 11d:	b8 48 89 e0 c1       	mov    $0xc1e08948,%eax
 122:	5d                   	pop    %rbp
 123:	c3                   	retq   

0000000000000124 <addval_416>:
 124:	f3 0f 1e fa          	endbr64 
 128:	55                   	push   %rbp
 129:	48 89 e5             	mov    %rsp,%rbp
 12c:	89 7d fc             	mov    %edi,-0x4(%rbp)
 12f:	8b 45 fc             	mov    -0x4(%rbp),%eax
 132:	2d b8 76 1f 3d       	sub    $0x3d1f76b8,%eax
 137:	5d                   	pop    %rbp
 138:	c3                   	retq   

0000000000000139 <getval_248>:
 139:	f3 0f 1e fa          	endbr64 
 13d:	55                   	push   %rbp
 13e:	48 89 e5             	mov    %rsp,%rbp
 141:	b8 09 d1 c3 18       	mov    $0x18c3d109,%eax
 146:	5d                   	pop    %rbp
 147:	c3                   	retq   

0000000000000148 <getval_339>:
 148:	f3 0f 1e fa          	endbr64 
 14c:	55                   	push   %rbp
 14d:	48 89 e5             	mov    %rsp,%rbp
 150:	b8 89 d1 90 c1       	mov    $0xc190d189,%eax
 155:	5d                   	pop    %rbp
 156:	c3                   	retq   

0000000000000157 <setval_498>:
 157:	f3 0f 1e fa          	endbr64 
 15b:	55                   	push   %rbp
 15c:	48 89 e5             	mov    %rsp,%rbp
 15f:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 163:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 167:	c7 00 89 ce a4 c0    	movl   $0xc0a4ce89,(%rax)
 16d:	90                   	nop
 16e:	5d                   	pop    %rbp
 16f:	c3                   	retq   

0000000000000170 <getval_386>:
 170:	f3 0f 1e fa          	endbr64 
 174:	55                   	push   %rbp
 175:	48 89 e5             	mov    %rsp,%rbp
 178:	b8 a9 d1 08 db       	mov    $0xdb08d1a9,%eax
 17d:	5d                   	pop    %rbp
 17e:	c3                   	retq   

000000000000017f <setval_212>:
 17f:	f3 0f 1e fa          	endbr64 
 183:	55                   	push   %rbp
 184:	48 89 e5             	mov    %rsp,%rbp
 187:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 18b:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 18f:	c7 00 c8 89 e0 c3    	movl   $0xc3e089c8,(%rax)
 195:	90                   	nop
 196:	5d                   	pop    %rbp
 197:	c3                   	retq   

0000000000000198 <setval_464>:
 198:	f3 0f 1e fa          	endbr64 
 19c:	55                   	push   %rbp
 19d:	48 89 e5             	mov    %rsp,%rbp
 1a0:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 1a4:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 1a8:	c7 00 89 ce 18 db    	movl   $0xdb18ce89,(%rax)
 1ae:	90                   	nop
 1af:	5d                   	pop    %rbp
 1b0:	c3                   	retq   

00000000000001b1 <getval_150>:
 1b1:	f3 0f 1e fa          	endbr64 
 1b5:	55                   	push   %rbp
 1b6:	48 89 e5             	mov    %rsp,%rbp
 1b9:	b8 89 c2 c4 d2       	mov    $0xd2c4c289,%eax
 1be:	5d                   	pop    %rbp
 1bf:	c3                   	retq   

00000000000001c0 <getval_352>:
 1c0:	f3 0f 1e fa          	endbr64 
 1c4:	55                   	push   %rbp
 1c5:	48 89 e5             	mov    %rsp,%rbp
 1c8:	b8 48 89 e0 90       	mov    $0x90e08948,%eax
 1cd:	5d                   	pop    %rbp
 1ce:	c3                   	retq   

00000000000001cf <setval_252>:
 1cf:	f3 0f 1e fa          	endbr64 
 1d3:	55                   	push   %rbp
 1d4:	48 89 e5             	mov    %rsp,%rbp
 1d7:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 1db:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 1df:	c7 00 89 ce 00 d2    	movl   $0xd200ce89,(%rax)
 1e5:	90                   	nop
 1e6:	5d                   	pop    %rbp
 1e7:	c3                   	retq   

00000000000001e8 <setval_271>:
 1e8:	f3 0f 1e fa          	endbr64 
 1ec:	55                   	push   %rbp
 1ed:	48 89 e5             	mov    %rsp,%rbp
 1f0:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 1f4:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 1f8:	c7 00 c9 ce 20 d2    	movl   $0xd220cec9,(%rax)
 1fe:	90                   	nop
 1ff:	5d                   	pop    %rbp
 200:	c3                   	retq   

0000000000000201 <getval_402>:
 201:	f3 0f 1e fa          	endbr64 
 205:	55                   	push   %rbp
 206:	48 89 e5             	mov    %rsp,%rbp
 209:	b8 89 d1 60 d2       	mov    $0xd260d189,%eax
 20e:	5d                   	pop    %rbp
 20f:	c3                   	retq   

0000000000000210 <addval_395>:
 210:	f3 0f 1e fa          	endbr64 
 214:	55                   	push   %rbp
 215:	48 89 e5             	mov    %rsp,%rbp
 218:	89 7d fc             	mov    %edi,-0x4(%rbp)
 21b:	8b 45 fc             	mov    -0x4(%rbp),%eax
 21e:	2d 77 3d 6b 2d       	sub    $0x2d6b3d77,%eax
 223:	5d                   	pop    %rbp
 224:	c3                   	retq   

0000000000000225 <setval_280>:
 225:	f3 0f 1e fa          	endbr64 
 229:	55                   	push   %rbp
 22a:	48 89 e5             	mov    %rsp,%rbp
 22d:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 231:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 235:	c7 00 7f 48 a9 e0    	movl   $0xe0a9487f,(%rax)
 23b:	90                   	nop
 23c:	5d                   	pop    %rbp
 23d:	c3                   	retq   

000000000000023e <setval_430>:
 23e:	f3 0f 1e fa          	endbr64 
 242:	55                   	push   %rbp
 243:	48 89 e5             	mov    %rsp,%rbp
 246:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 24a:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 24e:	c7 00 89 ce a4 c9    	movl   $0xc9a4ce89,(%rax)
 254:	90                   	nop
 255:	5d                   	pop    %rbp
 256:	c3                   	retq   

0000000000000257 <getval_285>:
 257:	f3 0f 1e fa          	endbr64 
 25b:	55                   	push   %rbp
 25c:	48 89 e5             	mov    %rsp,%rbp
 25f:	b8 89 d1 20 c9       	mov    $0xc920d189,%eax
 264:	5d                   	pop    %rbp
 265:	c3                   	retq   

0000000000000266 <getval_438>:
 266:	f3 0f 1e fa          	endbr64 
 26a:	55                   	push   %rbp
 26b:	48 89 e5             	mov    %rsp,%rbp
 26e:	b8 89 ce 08 d2       	mov    $0xd208ce89,%eax
 273:	5d                   	pop    %rbp
 274:	c3                   	retq   

0000000000000275 <addval_378>:
 275:	f3 0f 1e fa          	endbr64 
 279:	55                   	push   %rbp
 27a:	48 89 e5             	mov    %rsp,%rbp
 27d:	89 7d fc             	mov    %edi,-0x4(%rbp)
 280:	8b 45 fc             	mov    -0x4(%rbp),%eax
 283:	2d 77 3d 6f 38       	sub    $0x386f3d77,%eax
 288:	5d                   	pop    %rbp
 289:	c3                   	retq   

000000000000028a <getval_270>:
 28a:	f3 0f 1e fa          	endbr64 
 28e:	55                   	push   %rbp
 28f:	48 89 e5             	mov    %rsp,%rbp
 292:	b8 4c 89 e0 c3       	mov    $0xc3e0894c,%eax
 297:	5d                   	pop    %rbp
 298:	c3                   	retq   

0000000000000299 <addval_152>:
 299:	f3 0f 1e fa          	endbr64 
 29d:	55                   	push   %rbp
 29e:	48 89 e5             	mov    %rsp,%rbp
 2a1:	89 7d fc             	mov    %edi,-0x4(%rbp)
 2a4:	8b 45 fc             	mov    -0x4(%rbp),%eax
 2a7:	2d 77 3d 6f 3c       	sub    $0x3c6f3d77,%eax
 2ac:	5d                   	pop    %rbp
 2ad:	c3                   	retq   

00000000000002ae <getval_403>:
 2ae:	f3 0f 1e fa          	endbr64 
 2b2:	55                   	push   %rbp
 2b3:	48 89 e5             	mov    %rsp,%rbp
 2b6:	b8 49 89 e0 c3       	mov    $0xc3e08949,%eax
 2bb:	5d                   	pop    %rbp
 2bc:	c3                   	retq   

00000000000002bd <setval_136>:
 2bd:	f3 0f 1e fa          	endbr64 
 2c1:	55                   	push   %rbp
 2c2:	48 89 e5             	mov    %rsp,%rbp
 2c5:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 2c9:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 2cd:	c7 00 89 ce c4 d2    	movl   $0xd2c4ce89,(%rax)
 2d3:	90                   	nop
 2d4:	5d                   	pop    %rbp
 2d5:	c3                   	retq   

00000000000002d6 <getval_302>:
 2d6:	f3 0f 1e fa          	endbr64 
 2da:	55                   	push   %rbp
 2db:	48 89 e5             	mov    %rsp,%rbp
 2de:	b8 48 89 e0 c3       	mov    $0xc3e08948,%eax
 2e3:	5d                   	pop    %rbp
 2e4:	c3                   	retq   

00000000000002e5 <getval_258>:
 2e5:	f3 0f 1e fa          	endbr64 
 2e9:	55                   	push   %rbp
 2ea:	48 89 e5             	mov    %rsp,%rbp
 2ed:	b8 89 c2 08 db       	mov    $0xdb08c289,%eax
 2f2:	5d                   	pop    %rbp
 2f3:	c3                   	retq   

00000000000002f4 <addval_325>:
 2f4:	f3 0f 1e fa          	endbr64 
 2f8:	55                   	push   %rbp
 2f9:	48 89 e5             	mov    %rsp,%rbp
 2fc:	89 7d fc             	mov    %edi,-0x4(%rbp)
 2ff:	8b 45 fc             	mov    -0x4(%rbp),%eax
 302:	2d ec 76 3d 6e       	sub    $0x6e3d76ec,%eax
 307:	5d                   	pop    %rbp
 308:	c3                   	retq   

0000000000000309 <setval_497>:
 309:	f3 0f 1e fa          	endbr64 
 30d:	55                   	push   %rbp
 30e:	48 89 e5             	mov    %rsp,%rbp
 311:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 315:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 319:	c7 00 89 c2 60 c0    	movl   $0xc060c289,(%rax)
 31f:	90                   	nop
 320:	5d                   	pop    %rbp
 321:	c3                   	retq   

0000000000000322 <addval_453>:
 322:	f3 0f 1e fa          	endbr64 
 326:	55                   	push   %rbp
 327:	48 89 e5             	mov    %rsp,%rbp
 32a:	89 7d fc             	mov    %edi,-0x4(%rbp)
 32d:	8b 45 fc             	mov    -0x4(%rbp),%eax
 330:	2d 77 31 7b 24       	sub    $0x247b3177,%eax
 335:	5d                   	pop    %rbp
 336:	c3                   	retq   

0000000000000337 <setval_279>:
 337:	f3 0f 1e fa          	endbr64 
 33b:	55                   	push   %rbp
 33c:	48 89 e5             	mov    %rsp,%rbp
 33f:	48 89 7d f8          	mov    %rdi,-0x8(%rbp)
 343:	48 8b 45 f8          	mov    -0x8(%rbp),%rax
 347:	c7 00 09 d1 84 db    	movl   $0xdb84d109,(%rax)
 34d:	90                   	nop
 34e:	5d                   	pop    %rbp
 34f:	c3                   	retq   

0000000000000350 <getval_407>:
 350:	f3 0f 1e fa          	endbr64 
 354:	55                   	push   %rbp
 355:	48 89 e5             	mov    %rsp,%rbp
 358:	b8 09 d1 20 d2       	mov    $0xd220d109,%eax
 35d:	5d                   	pop    %rbp
 35e:	c3                   	retq   

000000000000035f <end_farm>:
 35f:	f3 0f 1e fa          	endbr64 
 363:	55                   	push   %rbp
 364:	48 89 e5             	mov    %rsp,%rbp
 367:	b8 01 00 00 00       	mov    $0x1,%eax
 36c:	5d                   	pop    %rbp
 36d:	c3                   	retq   
