//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTableViewItem.h"

@class NSString;

@interface MTVoucherEmptyTableViewItem : MTTableViewItem
{
    BOOL _buttonHidden;
    id _emptyTarget;
    SEL _emptyAction;
    NSString *_title;
    int _cellSelectionStyle;
}

@property(nonatomic) int cellSelectionStyle; // @synthesize cellSelectionStyle=_cellSelectionStyle;
@property(nonatomic, getter=isButtonHidden) BOOL buttonHidden; // @synthesize buttonHidden=_buttonHidden;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) SEL emptyAction; // @synthesize emptyAction=_emptyAction;
@property(nonatomic) id emptyTarget; // @synthesize emptyTarget=_emptyTarget;
- (void).cxx_destruct;
- (id)init;

@end
