//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface KSAudioProcessor : NSObject
{
}

- (void)dispose;
- (void)seek;
- (void)processLPCM:(void *)arg1 len:(unsigned int *)arg2 maxLen:(unsigned int)arg3 ioNum:(unsigned int *)arg4;
- (_Bool)prepare:(struct AudioStreamBasicDescription *)arg1 err:(id *)arg2;

@end

