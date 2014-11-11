//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTableViewController.h"

@class MTPurchaseBankSection, MTSegmentedControl, NSArray, NSMutableArray, UIView;

@interface MTBankPickerViewController : MTTableViewController
{
    MTSegmentedControl *_headerSegmentView;
    int _selectedIndex;
    CDUnknownBlockType _completionBlock;
    NSMutableArray *_creditBankSectionsArray;
    NSMutableArray *_debitBankSectionsArray;
    MTPurchaseBankSection *_hotCreditBankSection;
    MTPurchaseBankSection *_hotDebitBankSection;
    NSArray *_creditCardArray;
    NSArray *_debitCardArray;
    int _paymentMode;
    UIView *_switchHeaderView;
}

@property(retain, nonatomic) UIView *switchHeaderView; // @synthesize switchHeaderView=_switchHeaderView;
@property(nonatomic) int paymentMode; // @synthesize paymentMode=_paymentMode;
@property(readonly, nonatomic) NSArray *debitCardArray; // @synthesize debitCardArray=_debitCardArray;
@property(readonly, nonatomic) NSArray *creditCardArray; // @synthesize creditCardArray=_creditCardArray;
- (void).cxx_destruct;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)didChangeHeaderSegment;
- (void)showBankcardList;
- (void)calculateBankList;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithCreditBanks:(id)arg1 andDebitArray:(id)arg2;

@end
