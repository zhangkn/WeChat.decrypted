//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAAppMessageBaseCellView.h"

#import "IMsgExt.h"

@class MMUILabel, MMWebImageView, UIImageView, WAAppPageViewModel, YYAsyncImageView;

@interface WAAppPageCellView : WAAppMessageBaseCellView <IMsgExt>
{
    MMWebImageView *_appLogoView;
    MMUILabel *_appNameLabel;
    UIImageView *_defaultLogo;
    YYAsyncImageView *_imageView;
    MMUILabel *_titleLabel;
}

@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) YYAsyncImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImageView *defaultLogo; // @synthesize defaultLogo=_defaultLogo;
@property(retain, nonatomic) MMUILabel *appNameLabel; // @synthesize appNameLabel=_appNameLabel;
@property(retain, nonatomic) MMWebImageView *appLogoView; // @synthesize appLogoView=_appLogoView;
- (void).cxx_destruct;
- (void)OnMsgDownloadThumbOK:(id)arg1 MsgWrap:(id)arg2;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (id)displayViewForImageBrowser;
- (void)layoutContentView;
- (void)initPageImageView;
- (void)initTitleView;
- (void)initHeaderView;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) WAAppPageViewModel *viewModel; // @dynamic viewModel;

@end

