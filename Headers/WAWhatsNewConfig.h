//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WAWhatsNewConfig : NSObject
{
    _Bool _isShowRedDot;
    _Bool _isSvrOpenWhatsNew;
    unsigned int _version;
    NSString *_userName;
    NSString *_appId;
    NSString *_welcomeTitle;
}

@property(retain, nonatomic) NSString *welcomeTitle; // @synthesize welcomeTitle=_welcomeTitle;
@property(nonatomic) _Bool isSvrOpenWhatsNew; // @synthesize isSvrOpenWhatsNew=_isSvrOpenWhatsNew;
@property(nonatomic) _Bool isShowRedDot; // @synthesize isShowRedDot=_isShowRedDot;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (void).cxx_destruct;
- (_Bool)isDataValid;
- (id)description;

@end

