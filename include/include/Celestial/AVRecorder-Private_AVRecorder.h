/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Celestial/AVRecorder.h>

@interface AVRecorder (Private_AVRecorder)
- (void)copyEncoderCookieToFile;	// IMP=0x3029bd8c
- (void)haveABuffer:(struct AudioQueueBuffer *)fp8 withTimeStamp:(const struct AudioTimeStamp *)fp12 andNumPackets:(unsigned long)fp16 andPacketDescs:(const struct AudioStreamPacketDescription *)fp20;	// IMP=0x3029be58
- (void)makeError:(id *)fp8 withDescription:(id)fp12 code:(long)fp16;	// IMP=0x3029c128
@end
