//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface FavoritesOnTopStorage : NSObject <PBCoding>
{
    _Bool bEditable;
    unsigned int mesLocalID;
    unsigned int favLocalId;
    NSString *chatUser;
}

+ (void)initialize;
@property(nonatomic) _Bool bEditable; // @synthesize bEditable;
@property(nonatomic) unsigned int favLocalId; // @synthesize favLocalId;
@property(nonatomic) unsigned int mesLocalID; // @synthesize mesLocalID;
@property(retain, nonatomic) NSString *chatUser; // @synthesize chatUser;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

