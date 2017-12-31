//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseTenPayCgi.h"

@interface WCPayF2FGetReceiveHistoryCgi : WCPayBaseTenPayCgi
{
    unsigned int _maxItemPerTime;
    unsigned int _svrRettryNum;
    unsigned long long _fromTimeStamp;
    unsigned long long _timeFormat;
    unsigned long long _chooseFlag;
    unsigned long long _loadMoreDirection;
    id <WCPayF2FGetReceiveHistoryCgiDelegate> _cgiDelegate;
}

@property(nonatomic) __weak id <WCPayF2FGetReceiveHistoryCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
@property(nonatomic) unsigned int svrRettryNum; // @synthesize svrRettryNum=_svrRettryNum;
@property(nonatomic) unsigned int maxItemPerTime; // @synthesize maxItemPerTime=_maxItemPerTime;
@property(nonatomic) unsigned long long loadMoreDirection; // @synthesize loadMoreDirection=_loadMoreDirection;
@property(nonatomic) unsigned long long chooseFlag; // @synthesize chooseFlag=_chooseFlag;
@property(nonatomic) unsigned long long timeFormat; // @synthesize timeFormat=_timeFormat;
@property(nonatomic) unsigned long long fromTimeStamp; // @synthesize fromTimeStamp=_fromTimeStamp;
- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)startSendRequest;
- (id)initWithDelegate:(id)arg1;

@end

