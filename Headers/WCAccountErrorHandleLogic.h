//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MMWebViewDelegate.h"

@class MMUIViewController, NSDictionary, NSString;

@interface WCAccountErrorHandleLogic : MMObject <MMWebViewDelegate>
{
    MMUIViewController *_currentViewController;
    _Bool _bFromReg;
    _Bool _bNeedGoNext;
    NSDictionary *_extParams;
    id <WCAccountErrorHandleLogicDelegate> _delegate;
}

@property(nonatomic) __weak id <WCAccountErrorHandleLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)webViewDidReturn:(id)arg1;
- (void)onWebViewCloseAndGoNext:(id)arg1;
- (void)onHandleErrorDone;
- (void)onHandleErrorCancel;
- (void)onErrorAction:(id)arg1;
- (void)openUrl:(id)arg1;
- (void)onVoicePrintAction:(id)arg1;
- (_Bool)onHandleError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

