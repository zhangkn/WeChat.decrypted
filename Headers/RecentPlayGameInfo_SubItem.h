//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class GiftCenter, RankSummary, RecentPlayCommText, RecentPlayRecommendBanner, RecommendTopic;

@interface RecentPlayGameInfo_SubItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) RecentPlayCommText *commText; // @dynamic commText;
@property(retain, nonatomic) GiftCenter *giftCenter; // @dynamic giftCenter;
@property(retain, nonatomic) RankSummary *rankSummary; // @dynamic rankSummary;
@property(retain, nonatomic) RecentPlayRecommendBanner *recommendBanner; // @dynamic recommendBanner;
@property(retain, nonatomic) RecommendTopic *recommendTopic; // @dynamic recommendTopic;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

