//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseCgi.h"

@interface WCPayLQTPreRedeemFundCgi : WCPayBaseCgi
{
    unsigned int _fee;
    id <WCPayLQTPreRedeemFundCgiDelegate> _cgiDelegate;
}

@property(nonatomic) __weak id <WCPayLQTPreRedeemFundCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
@property(nonatomic) unsigned int fee; // @synthesize fee=_fee;
- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)startRequest;
- (id)initWithDelegate:(id)arg1 request:(id)arg2;

@end
