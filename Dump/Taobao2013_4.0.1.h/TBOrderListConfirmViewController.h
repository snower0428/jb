//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBOrderListBusinessViewDelegate.h"

@class TBOrderListBusinessView;

@interface TBOrderListConfirmViewController : TBViewController <TBOrderListBusinessViewDelegate>
{
    TBOrderListBusinessView *_orderListBusinessView;
}

+ (BOOL)tbNeedToolbar;
- (void).cxx_destruct;
- (id)TBOrderListBusinessView:(id)arg1 footerViewForOrderItem:(id)arg2;
- (void)TBOrderListBusinessView:(id)arg1 didSelectCellOfOrder:(id)arg2;
- (void)TBOrderListBusinessView:(id)arg1 didSelectPictureOfAutction:(id)arg2;
- (void)confirmGood;
- (void)getCard;
- (void)viewCard;
- (void)viewLogistic;
- (void)setupToolbarView;
- (id)item:(int)arg1 selector:(SEL)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
