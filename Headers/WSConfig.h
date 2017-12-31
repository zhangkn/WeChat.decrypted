//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface WSConfig : NSObject <PBCoding>
{
    _Bool bSupportWKWebView;
    _Bool bShowFindFriendEntry;
    _Bool bShowFindFriendBrowseEntry;
    _Bool bDevelopFlag;
    unsigned int switchType;
    NSString *devH5Dir;
}

+ (void)initialize;
@property(nonatomic) unsigned int switchType; // @synthesize switchType;
@property(nonatomic) _Bool bDevelopFlag; // @synthesize bDevelopFlag;
@property(retain, nonatomic) NSString *devH5Dir; // @synthesize devH5Dir;
@property(nonatomic) _Bool bShowFindFriendBrowseEntry; // @synthesize bShowFindFriendBrowseEntry;
@property(nonatomic) _Bool bShowFindFriendEntry; // @synthesize bShowFindFriendEntry;
@property(nonatomic) _Bool bSupportWKWebView; // @synthesize bSupportWKWebView;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

