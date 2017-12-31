//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBaseInfoItem.h"

#import "WCPaySelectBankViewControllerDelegate.h"

@class MMUIViewController, MMWebImageView, NSString, UILabel, WCPayTransBankItem;

@interface WCPaySelectBankItem : WCBaseInfoItem <WCPaySelectBankViewControllerDelegate>
{
    MMUIViewController *m_currentViewController;
    WCPayTransBankItem *m_value;
    MMWebImageView *m_bankIconView;
    UILabel *m_bankLabel;
    _Bool m_isUnselectable;
    id <WCPaySelectBankItemDelegate> _m_selectBankItemDelegate;
}

@property(nonatomic) __weak id <WCPaySelectBankItemDelegate> m_selectBankItemDelegate; // @synthesize m_selectBankItemDelegate=_m_selectBankItemDelegate;
- (void).cxx_destruct;
- (id)getBankIconImageView;
- (id)bankString;
- (void)setBankItem:(id)arg1;
- (void)OnWCPaySelectBankViewControllerDidSelectItem:(id)arg1;
- (void)becomeFirstResponder;
- (id)getValue;
- (void)setCurrentViewController:(id)arg1;
- (void)updateView;
- (void)initView:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

