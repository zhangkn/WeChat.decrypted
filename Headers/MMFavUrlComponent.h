//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMComponent.h"

#import "IStrangerContactMgrExt.h"
#import "RichTextLayoutDelegate.h"

@class FavAttributeCPLabel, NSString, RichTextView;

@interface MMFavUrlComponent : MMComponent <IStrangerContactMgrExt, RichTextLayoutDelegate>
{
    RichTextView *_titleLabel;
    FavAttributeCPLabel *_titleSearchLabel;
    FavAttributeCPLabel *_desLabel;
    _Bool _isOnlyTitle;
}

+ (double)getCurDesLineNum:(id)arg1;
+ (double)getCurTitleLineNum:(id)arg1;
+ (id)getCurDescFont:(id)arg1;
+ (id)getCurTitleFont:(id)arg1;
+ (double)calCardHeightWithComData:(id)arg1;
+ (double)calHeightWithComData:(id)arg1;
- (void).cxx_destruct;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (void)onStrangerContactUpdated:(id)arg1;
- (id)getAppSourceName:(id)arg1;
- (void)dealloc;
- (void)configContentLayout;
- (void)configCardLabel;
- (void)configLabel;
- (id)initWithComData:(id)arg1;
- (void)setHighlightWord:(id)arg1 Detail:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

