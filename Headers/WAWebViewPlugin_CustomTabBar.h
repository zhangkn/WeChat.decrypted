//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAWebViewPluginBase.h"

#import "UITabBarDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, UIColor, UITabBar, UIView;

@interface WAWebViewPlugin_CustomTabBar : WAWebViewPluginBase <UITabBarDelegate>
{
    UITabBar *_myCustomTabBar;
    _Bool _isTopTabBar;
    long long _mainTabIndex;
    long long _curSelectedIndex;
    _Bool _bIsLoading;
    UIView *_topCoverBoderLine;
    UIView *_topSelectedLine;
    UIColor *_textColor;
    UIColor *_selectTextColor;
    NSMutableArray *_arrTabItemData;
    NSMutableDictionary *_dicChildWebView;
    NSMutableArray *_tabBarBtns;
    NSMutableArray *_badgeViews;
    _Bool _isTabbarAnimating;
    _Bool _isTabbarVisible;
    long long m_TabItemCount;
}

@property(nonatomic) long long m_CurSelectedIndex; // @synthesize m_CurSelectedIndex=_curSelectedIndex;
@property(nonatomic) long long m_TabItemCount; // @synthesize m_TabItemCount;
- (void).cxx_destruct;
- (id)genTabbarItemsWithtextColor:(id)arg1 selectedTextColor:(id)arg2;
- (void)hideBadgeOnItemIndex:(long long)arg1;
- (void)setTabBarBadgeImage:(id)arg1 forIndex:(long long)arg2;
- (id)getBadgeViewForIndex:(long long)arg1;
- (id)getTabBarBtnForIndex:(long long)arg1;
- (void)setTabBarBadgeString:(id)arg1 badgeColor:(id)arg2 forIndex:(long long)arg3;
- (int)getBadgeViewRightMarginPortrait;
- (id)getBadgeViews;
- (id)getTabBarBtnViews;
- (_Bool)isVisible;
- (void)setTabBarVisible:(_Bool)arg1 animate:(_Bool)arg2;
- (void)setTabBarVisible:(_Bool)arg1;
- (id)imageWithImage:(id)arg1 scaledToSize:(struct CGSize)arg2;
- (void)delaySwitchTabItemWithIndex:(id)arg1;
- (void)loadChildTabWebViewWithIndex:(long long)arg1;
- (id)tabWebViewFromIndex:(unsigned long long)arg1;
- (void)frameChanged;
- (void)switchToTabItem:(long long)arg1;
- (void)tabBar:(id)arg1 didSelectItem:(id)arg2;
- (void)updateTopTabBarSelectedLinePosition;
- (void)bringTabBarToFront;
- (struct CGRect)currentTabBarFrame;
- (void)setTabBarStyleWithTextColor:(id)arg1 selectTextColor:(id)arg2 backgroundColor:(id)arg3 borderColor:(id)arg4;
- (void)setItemAtTabIndex:(long long)arg1 text:(id)arg2 iconPath:(id)arg3 selectIconPath:(id)arg4;
- (void)createChildVCTabBarWithItems:(id)arg1 mainTabIndex:(long long)arg2 position:(id)arg3 backgroundColor:(id)arg4 textColor:(id)arg5 selectedTextColor:(id)arg6 borderColor:(id)arg7;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (id)init;
- (_Bool)isLoadingChildTab;
- (id)getTabWebViewAtIndex:(unsigned long long)arg1;
- (id)getSelectedTabWebView;
- (_Bool)isTabCreatedWithPagePath:(id)arg1;
- (void)selectTabWithPagePath:(id)arg1;
- (void)selectMainTab;
- (_Bool)isSelectedChildTab;
- (id)getChildTabWebViews;
- (double)tabbarHeight;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

