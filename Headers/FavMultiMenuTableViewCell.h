//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMMultiMenuTableViewCell.h"

@class UIView;

@interface FavMultiMenuTableViewCell : MMMultiMenuTableViewCell
{
    UIView *coverView;
    _Bool m_selected;
    _Bool _m_bUseCardStyle;
    UIView *_m_bkgCardView;
}

@property(retain, nonatomic) UIView *m_bkgCardView; // @synthesize m_bkgCardView=_m_bkgCardView;
@property(nonatomic) _Bool m_bUseCardStyle; // @synthesize m_bUseCardStyle=_m_bUseCardStyle;
- (void).cxx_destruct;
- (void)moreAction:(id)arg1;
- (void)deleteAction:(id)arg1;
- (void)forwardAction:(id)arg1;
- (void)setCoverView:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;

@end

