//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMOrderBaseView.h"

@class RowElementInvoice, TMOrderInvoiceTitleView, UISwitch, UITableView, UIView, UIViewController;

@interface TMOrderInvoiceView : TMOrderBaseView
{
    BOOL _highlighted;
    UISwitch *_needInvoiceSwitch;
    TMOrderInvoiceTitleView *_invoiceTitleView;
    UIView *_invoiceTypeView;
    RowElementInvoice *_invoice;
    UITableView *_ownerTableView;
    UIViewController *_owner;
}

+ (float)calculateHeight:(BOOL)arg1 needInvoice:(BOOL)arg2 hasTypes:(BOOL)arg3;
@property(nonatomic) UIViewController *owner; // @synthesize owner=_owner;
@property(nonatomic) UITableView *ownerTableView; // @synthesize ownerTableView=_ownerTableView;
@property(retain, nonatomic) RowElementInvoice *invoice; // @synthesize invoice=_invoice;
- (void).cxx_destruct;
- (void)onInvoiceTypeSelect:(id)arg1;
- (void)onInvoiceSwitchChanged:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (float)drawContent:(struct CGContext *)arg1;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;

@end
