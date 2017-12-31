//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "MMImageLoaderObserver.h"

@class NSString, NSURL, UIImage;

@interface MMWebImageButton : UIButton <MMImageLoaderObserver>
{
    UIImage *_defaultImage;
    NSURL *_url;
}

+ (_Bool)CanLoadImage:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)setDefaultImage:(id)arg1;
- (_Bool)setImageURL:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

