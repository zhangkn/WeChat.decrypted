//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface WXMiniProgramObject : NSObject
{
    _Bool _withShareTicket;
    NSString *webpageUrl;
    NSString *userName;
    NSString *path;
    NSData *_hdImageData;
    unsigned long long _miniProgramType;
}

+ (id)object;
@property(nonatomic) unsigned long long miniProgramType; // @synthesize miniProgramType=_miniProgramType;
@property(nonatomic) _Bool withShareTicket; // @synthesize withShareTicket=_withShareTicket;
@property(retain, nonatomic) NSData *hdImageData; // @synthesize hdImageData=_hdImageData;
@property(retain, nonatomic) NSString *path; // @synthesize path;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
@property(retain, nonatomic) NSString *webpageUrl; // @synthesize webpageUrl;
- (void).cxx_destruct;

@end

