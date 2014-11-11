//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, TBSNSPluginMenuItem;

@interface TBSNSPluginSubMenuButton : UIButton
{
    TBSNSPluginMenuItem *_data;
    NSString *_levelFlag;
    id <TBSNSPluginSubMenuButtonDelegate> _delegate;
    NSString *_eventListener;
    NSString *_eventType;
    NSString *_eventParam;
}

@property(retain, nonatomic) NSString *eventParam; // @synthesize eventParam=_eventParam;
@property(retain, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
@property(retain, nonatomic) NSString *eventListener; // @synthesize eventListener=_eventListener;
@property(nonatomic) id <TBSNSPluginSubMenuButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *levelFlag; // @synthesize levelFlag=_levelFlag;
@property(retain, nonatomic) TBSNSPluginMenuItem *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)clickedEvent:(id)arg1;
- (void)initialize:(id)arg1 withIconSize:(struct CGSize)arg2 withTextColor:(id)arg3 withTextFontSize:(float)arg4;
- (id)initWithFrame:(struct CGRect)arg1 withData:(id)arg2 withIcon:(id)arg3 withIconSize:(struct CGSize)arg4 withTextColor:(id)arg5 withTextFontSize:(float)arg6 withDelegate:(id)arg7;
- (id)initWithFrame:(struct CGRect)arg1;

@end

