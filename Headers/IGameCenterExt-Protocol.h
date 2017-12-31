//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GameCenterDetailInfo, GameLibraryAppInfo, GameMoreGameInfo, GameSearchRecommendList, GetGameIndex2Response, NSArray, NSDictionary, NSString;

@protocol IGameCenterExt <NSObject>

@optional
- (void)onGameSetBlockState:(_Bool)arg1 appID:(NSString *)arg2 error:(long long)arg3;
- (void)onGameGetBlockState:(_Bool)arg1 appID:(NSString *)arg2 error:(long long)arg3;
- (void)onGameSearchEntryStatusChange:(_Bool)arg1 placeholder:(NSString *)arg2;
- (void)onGameSearchSmartBox:(NSString *)arg1 recommendList:(GameSearchRecommendList *)arg2 error:(long long)arg3;
- (void)onGameSearchFinishedWithResultGroups:(NSArray *)arg1 searchWithText:(NSString *)arg2 error:(long long)arg3;
- (void)onGetAllMiniGameList:(NSArray *)arg1 error:(long long)arg2;
- (void)onGetAllGameList:(NSArray *)arg1 error:(long long)arg2;
- (void)onSubscribeNewGameWithAppID:(NSString *)arg1 alertTitle:(NSString *)arg2 message:(NSString *)arg3 extraInfo:(NSDictionary *)arg4 error:(long long)arg5;
- (void)onGetMoreGameList:(GameMoreGameInfo *)arg1 classifyID:(NSString *)arg2 errCode:(int)arg3;
- (void)onGetLibGameList:(GameLibraryAppInfo *)arg1 errCode:(int)arg2;
- (void)onNewGameAdChanged;
- (void)onGetUpList:(NSArray *)arg1 appID:(NSString *)arg2 errCode:(int)arg3;
- (void)onUpFriend:(NSString *)arg1 appID:(NSString *)arg2 errCode:(int)arg3;
- (void)onGetGameDetailInfo:(GameCenterDetailInfo *)arg1 errCode:(long long)arg2;
- (void)onFetchGameCenterHomeData:(GetGameIndex2Response *)arg1 error:(long long)arg2 FromHomeCgi:(_Bool)arg3;
@end

