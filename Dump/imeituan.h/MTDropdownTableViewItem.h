//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTableViewItem.h"

@class NSArray, NSNumber, NSString, UIImage;

@interface MTDropdownTableViewItem : MTTableViewItem
{
    BOOL _selected;
    UIImage *_iconImage;
    NSString *_titleString;
    NSString *_actualTitleString;
    NSString *_tipString;
    UIImage *_accessoryImage;
    NSArray *_subItemArray;
    id _value;
    NSNumber *_mainCategoryID;
    int _dropDownTableItemType;
}

@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) int dropDownTableItemType; // @synthesize dropDownTableItemType=_dropDownTableItemType;
@property(retain, nonatomic) NSNumber *mainCategoryID; // @synthesize mainCategoryID=_mainCategoryID;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) NSArray *subItemArray; // @synthesize subItemArray=_subItemArray;
@property(retain, nonatomic) UIImage *accessoryImage; // @synthesize accessoryImage=_accessoryImage;
@property(retain, nonatomic) NSString *tipString; // @synthesize tipString=_tipString;
@property(retain, nonatomic) NSString *actualTitleString; // @synthesize actualTitleString=_actualTitleString;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
- (void).cxx_destruct;
@property(nonatomic) float cellHeight;
- (id)copy;

@end
