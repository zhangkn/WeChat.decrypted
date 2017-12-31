//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBottleContact, CMessageWrap, CModUserImgWrap, NSArray, NSData, NSDictionary, NSSet, NSString;

@protocol INewSyncExt <NSObject>

@optional
- (void)onNewSyncSendCommand:(NSDictionary *)arg1;
- (void)onNewSyncNotifyUnlock:(NSDictionary *)arg1;
- (void)onNewSyncMarkFunction:(NSDictionary *)arg1;
- (void)onNewSyncQuitFunction:(NSDictionary *)arg1;
- (void)onNewSyncEnterFunction:(NSDictionary *)arg1;
- (void)onNewSyncChatListSession:(NSDictionary *)arg1;
- (void)onNewSyncQuitSession:(NSString *)arg1;
- (void)onNewSyncEnterSession:(NSString *)arg1;
- (void)onNewSyncGetAllChat;
- (void)onNewSyncOnlineStatus:(unsigned int)arg1 withVersion:(unsigned int)arg2;
- (void)onNewSyncModUserImage:(CModUserImgWrap *)arg1;
- (void)onNewSyncModUserInfoExt:(NSData *)arg1;
- (void)onNewSyncModUserInfo:(NSData *)arg1;
- (void)onNewSyncIPXX:(CMessageWrap *)arg1;
- (void)onNewSyncBadRoomBatchHandleDigest:(NSArray *)arg1;
- (void)onNewSyncBadRoomAddDigest:(NSData *)arg1;
- (void)onNewSyncBadRoomClearUnread:(NSString *)arg1;
- (void)onNewSyncNotAddDBSession:(NSString *)arg1 withMessages:(NSArray *)arg2;
- (void)onNewSyncAddMsgSessionArray:(NSDictionary *)arg1 withUsers:(NSSet *)arg2;
- (void)onNewSyncShowPush:(CMessageWrap *)arg1;
- (void)onNewSyncSpecialSession:(NSString *)arg1 withMessages:(NSArray *)arg2;
- (void)onNewSyncClearUnread:(NSString *)arg1;
- (void)onNewSyncNotAddDBMessage:(CMessageWrap *)arg1;
- (void)onNewSyncDeleteMessage:(CMessageWrap *)arg1;
- (void)onNewSyncAddMessage:(CMessageWrap *)arg1;
- (void)onNewSyncBatchModContacts:(NSArray *)arg1;
- (void)onNewSyncBottleContact:(CBottleContact *)arg1;
- (void)onNewSyncDeleteContact:(NSString *)arg1;
- (void)onNewSyncOplogConnectFail;
- (void)onNewSyncOplogFail;
- (void)onNewSyncOplogOK;
- (void)onNewSyncPlugin:(unsigned int)arg1;
- (void)onNewSyncEnd;
- (void)onNewSyncFinish;
- (void)onNewSyncStart;
- (void)onNewSyncBegin;
@end

