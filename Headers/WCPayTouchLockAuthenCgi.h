//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseTenPayCgi.h"

#import "WCPayLogicMgrExt.h"

@class NSString;

@interface WCPayTouchLockAuthenCgi : WCPayBaseTenPayCgi <WCPayLogicMgrExt>
{
    NSString *_password;
}

@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)startRequest;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <WCPayTouchLockAuthenCgiDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

