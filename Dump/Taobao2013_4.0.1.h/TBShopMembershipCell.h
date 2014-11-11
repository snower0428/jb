//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "TBShopMembershipDelegate.h"

@class NSMutableDictionary, TBShopMembershipGetView, TBShopMembershipShowView, UIView;

__attribute__((visibility("hidden")))
@interface TBShopMembershipCell : UITableViewCell <TBShopMembershipDelegate>
{
    CDUnknownBlockType _actionBlock;
    NSMutableDictionary *_actionParamDict;
    TBShopMembershipShowView *_showView;
    TBShopMembershipGetView *_getView;
    UIView *_customBackgroundView;
}

@property(retain, nonatomic) UIView *customBackgroundView; // @synthesize customBackgroundView=_customBackgroundView;
@property(retain, nonatomic) TBShopMembershipGetView *getView; // @synthesize getView=_getView;
@property(retain, nonatomic) TBShopMembershipShowView *showView; // @synthesize showView=_showView;
@property(retain, nonatomic) NSMutableDictionary *actionParamDict; // @synthesize actionParamDict=_actionParamDict;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void).cxx_destruct;
- (void)MembershipSelected;
- (void)clearSubview;
- (void)updateData:(id)arg1 weakNetwork:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
