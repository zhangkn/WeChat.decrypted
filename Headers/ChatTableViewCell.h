//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MultiSelectTableViewCell.h"

@class BaseChatCellView;

@interface ChatTableViewCell : MultiSelectTableViewCell
{
    BaseChatCellView *m_cellView;
    _Bool m_willBeDisplayed;
    _Bool m_didEndDisplayed;
}

@property(readonly, nonatomic) BaseChatCellView *cellView; // @synthesize cellView=m_cellView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didEndDisplayed;
- (void)willBeDisplayed;
- (void)setDelegate:(id)arg1;
- (void)setViewModel:(id)arg1;

@end

