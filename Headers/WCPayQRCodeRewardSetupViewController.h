//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class MMTableView, MMTextView, MMUIView, NSMutableArray, NSString, UIButton, UITextField, WCPayParamInvalidTipView;

@interface WCPayQRCodeRewardSetupViewController : WCPayBaseViewController <UITableViewDelegate, UITextFieldDelegate, UITextViewDelegate>
{
    id <WCPayQRCodeRewardSetupViewControllerDelegate> _delegate;
    MMTableView *_tableView;
    MMTextView *_rewardDescTextView;
    MMUIView *_keyboardInputToolBar;
    UIButton *_confirmGenCodeBtn;
    UITextField *_currentEdittingTextField;
    WCPayParamInvalidTipView *_invalidTipsView;
    NSMutableArray *_defaultAmountList;
    NSMutableArray *_editAmountList;
    unsigned long long _maxAmount;
}

@property(nonatomic) unsigned long long maxAmount; // @synthesize maxAmount=_maxAmount;
@property(retain, nonatomic) NSMutableArray *editAmountList; // @synthesize editAmountList=_editAmountList;
@property(retain, nonatomic) NSMutableArray *defaultAmountList; // @synthesize defaultAmountList=_defaultAmountList;
@property(retain, nonatomic) WCPayParamInvalidTipView *invalidTipsView; // @synthesize invalidTipsView=_invalidTipsView;
@property(retain, nonatomic) UITextField *currentEdittingTextField; // @synthesize currentEdittingTextField=_currentEdittingTextField;
@property(retain, nonatomic) UIButton *confirmGenCodeBtn; // @synthesize confirmGenCodeBtn=_confirmGenCodeBtn;
@property(retain, nonatomic) MMUIView *keyboardInputToolBar; // @synthesize keyboardInputToolBar=_keyboardInputToolBar;
@property(retain, nonatomic) MMTextView *rewardDescTextView; // @synthesize rewardDescTextView=_rewardDescTextView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WCPayQRCodeRewardSetupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateConfirmBtnAndTipsViewStatusWithCurrentAmount:(long long)arg1 amountIndex:(unsigned long long)arg2;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)resignTextField;
- (void)confirmGenCodeBtnClick;
- (void)confirmToExitEdit;
- (void)leftBarButtonClick;
- (id)genKeyboardInputToolBar;
- (void)setupTableHeaderView;
- (void)setupContentView;
- (void)setupNavigationBar;
- (void)setupData;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (_Bool)useTransparentNavibar;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

