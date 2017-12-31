//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface ContactExtendCodePB : NSObject <PBCoding>
{
    NSString *remark;
    NSString *remarkPYFull;
    unsigned int conType;
    unsigned int certificationFlag;
}

+ (void)initialize;
@property(nonatomic) unsigned int certificationFlag; // @synthesize certificationFlag;
@property(nonatomic) unsigned int conType; // @synthesize conType;
@property(retain, nonatomic) NSString *remarkPYFull; // @synthesize remarkPYFull;
@property(retain, nonatomic) NSString *remark; // @synthesize remark;
- (void).cxx_destruct;
- (_Bool)decodeFromData:(id)arg1;
- (id)encodeData;
- (id)initWithContact:(id)arg1;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

