//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "ShareConfirmViewDelegate.h"

@class NSData, NSDictionary, NSString, ShareConfirmView, WCUploadTask;

@interface ShareUploadTaskConfirmLogicHelper : MMObject <ShareConfirmViewDelegate>
{
    ShareConfirmView *_confirmView;
    WCUploadTask *_uploadTask;
    id <ShareUploadTaskConfirmLogicHelperDelegate> _delegate;
    NSData *_imageData;
    NSString *_thumbImageUrl;
    _Bool _isShowTextView;
    _Bool _hasBeenHidden;
    NSDictionary *_userData;
}

@property(retain, nonatomic) NSDictionary *userData; // @synthesize userData=_userData;
@property(retain, nonatomic) NSString *thumbImageUrl; // @synthesize thumbImageUrl=_thumbImageUrl;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) WCUploadTask *uploadTask; // @synthesize uploadTask=_uploadTask;
@property(nonatomic) __weak id <ShareUploadTaskConfirmLogicHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)OnBackToApp:(id)arg1;
- (void)OnError:(id)arg1;
- (void)OnCancel:(id)arg1;
- (void)OnSend:(id)arg1;
- (void)layoutSubviewToOrientation:(long long)arg1;
- (void)rotateToOrientaion:(long long)arg1;
- (void)rotateToCurrentOrietation;
- (void)hideConfirmView;
- (void)showConfirmView;
- (void)dealloc;
- (id)initWithUploadTask:(id)arg1 isShowTextView:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

