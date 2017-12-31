//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "tableViewDelegate.h"

@class MMTableView, NSString, UITextField;

@interface WCCreateNewGroupViewController : MMUIViewController <tableViewDelegate, UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate>
{
    MMTableView *m_tableView;
    UITextField *m_textField;
    NSString *m_title;
    NSString *m_placeHolderText;
    NSString *m_originText;
    NSString *m_hintText;
    id <WCCreateNewGroupViewControllerDelegate> m_delegate;
}

@property(retain, nonatomic) NSString *m_hintText; // @synthesize m_hintText;
@property(retain, nonatomic) NSString *m_originText; // @synthesize m_originText;
@property(retain, nonatomic) NSString *m_placeHolderText; // @synthesize m_placeHolderText;
@property(retain, nonatomic) NSString *m_title; // @synthesize m_title;
@property(nonatomic) __weak id <WCCreateNewGroupViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)makeTextCell:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)textFieldTextDidChange:(id)arg1;
- (void)OnDataChange;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)initTableView;
- (void)onCancel;
- (void)onSave;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

