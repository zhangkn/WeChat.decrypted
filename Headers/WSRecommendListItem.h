//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WSRecommendListItem : NSObject
{
    _Bool _isNew;
    int _opType;
    NSString *_hotword;
    NSString *_jumpUrl;
    NSString *_remark;
}

@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(nonatomic) int opType; // @synthesize opType=_opType;
@property(retain, nonatomic) NSString *hotword; // @synthesize hotword=_hotword;
- (void).cxx_destruct;

@end

