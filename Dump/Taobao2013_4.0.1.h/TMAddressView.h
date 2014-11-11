//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TMAddressToolbar, TMShippingAddress;

@interface TMAddressView : UIView
{
    BOOL _highlighted;
    TMShippingAddress *_shopAddress;
    TMAddressToolbar *_toolbar;
    id <TMAddressViewDelegate> _delegate;
    int _row;
}

@property(nonatomic) int row; // @synthesize row=_row;
@property(retain, nonatomic) id <TMAddressViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TMAddressToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) TMShippingAddress *shopAddress; // @synthesize shopAddress=_shopAddress;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)actionToolbar:(id)arg1;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

