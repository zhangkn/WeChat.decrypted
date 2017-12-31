//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@class NSArray, NSMutableArray;

@interface MMRegionSeachResultsViewController : WCPayBaseViewController
{
    NSArray *_results;
    id <MMRegionSeachResultsViewControllerDelegate> _delegate;
    NSMutableArray *_countries;
    NSMutableArray *_provinces;
    NSMutableArray *_cities;
}

@property(retain, nonatomic) NSMutableArray *cities; // @synthesize cities=_cities;
@property(retain, nonatomic) NSMutableArray *provinces; // @synthesize provinces=_provinces;
@property(retain, nonatomic) NSMutableArray *countries; // @synthesize countries=_countries;
@property(nonatomic) __weak id <MMRegionSeachResultsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *results; // @synthesize results=_results;
- (void).cxx_destruct;
- (void)clickInfoCell:(id)arg1;
- (void)reloadData;
- (void)setupData;
- (void)viewDidLoad;

@end

