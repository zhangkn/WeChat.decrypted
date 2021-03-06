//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FTSDB, NSMutableDictionary, NSRecursiveLock;

@interface FTSMessageDB : NSObject
{
    FTSDB *_database;
    NSRecursiveLock *_lock;
    NSMutableDictionary *_dicValidUserName;
    NSMutableDictionary *_dicValidUserNameId;
    NSMutableDictionary *_dicInvalidUserNameId;
}

@property(retain, nonatomic) FTSDB *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (_Bool)deleteInvalidRowsInChatTable:(unsigned int)arg1;
- (_Bool)hasInvalidRowsInChatTable;
- (unsigned int)getPreCursorMesId:(id)arg1;
- (unsigned int)getNextCursorMesId:(id)arg1;
- (id)queryText:(id)arg1 limitUsrname:(id)arg2 sessionLimit:(unsigned int)arg3 itemLimit:(unsigned int)arg4 maxTime:(unsigned int)arg5 searchAll:(id *)arg6;
- (id)queryText:(id)arg1 limitUsrname:(id)arg2;
- (_Bool)deleteRowInChatTable:(id)arg1 arrMsgWrap:(id)arg2;
- (_Bool)deleteRowInChatTable:(id)arg1 msgWrap:(id)arg2;
- (_Bool)deleteRowInUserNameIDTable:(unsigned int)arg1;
- (_Bool)updateInvalidUserPreCursorMesId:(unsigned int)arg1 cursorMesId:(unsigned int)arg2;
- (_Bool)updateUserPreCursorMesId:(id)arg1 cursorMesId:(unsigned int)arg2;
- (_Bool)updateUserNextCursorMesId:(id)arg1 cursorMesId:(unsigned int)arg2;
- (_Bool)updateUserNameInvalid:(id)arg1;
- (_Bool)insertRowsInChatTable:(id)arg1 arrMsgWrap:(id)arg2;
- (_Bool)insertRowInChatTable:(id)arg1 msgWrap:(id)arg2;
- (_Bool)insertNewRowInUserNameIDTable:(id)arg1 lastMsg:(id)arg2;
- (void)tryCacheUserNameIdTable;
- (id)tryGetValidIndexItemByUserNameId:(unsigned int)arg1;
- (id)tryGetValidIndexItemByUserName:(id)arg1;
- (_Bool)createAllTable;
- (void)reloadDB;
- (void)initDB:(id)arg1;
- (void)dealloc;
- (id)init;

@end

