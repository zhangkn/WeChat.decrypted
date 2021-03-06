//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSData;

@interface OpLog : NSObject <WCTTableCoding>
{
    _Bool isAutoIncrement;
    unsigned int oplogID;
    unsigned int oplogCmdID;
    NSData *oplogBuffer;
    long long lastInsertedRowID;
}

+ (const struct WCTProperty *)oplogBuffer;
+ (const struct WCTProperty *)oplogCmdID;
+ (const struct WCTProperty *)oplogID;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
@property(retain, nonatomic) NSData *oplogBuffer; // @synthesize oplogBuffer;
@property(nonatomic) unsigned int oplogCmdID; // @synthesize oplogCmdID;
@property(nonatomic) unsigned int oplogID; // @synthesize oplogID;
- (void).cxx_destruct;
- (id)description;

@end

