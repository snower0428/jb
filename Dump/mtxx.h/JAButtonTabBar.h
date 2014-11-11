//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIButton;

__attribute__((visibility("hidden")))
@interface JAButtonTabBar : NSObject
{
    UIButton *_lastClickedBtn;
    unsigned int _selectedIndex;
    id <JAButtonTabBarDelegate> _delegate;
    NSArray *_btnsArray;
}

@property(nonatomic) unsigned int selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(copy, nonatomic) NSArray *btnsArray; // @synthesize btnsArray=_btnsArray;
@property(nonatomic) __weak id <JAButtonTabBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setClickEnable:(BOOL)arg1;
- (void)setHighlightedIndex:(unsigned int)arg1;
- (void)clickButton:(id)arg1;

@end

