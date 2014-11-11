//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface HorizontalCellInfo : NSObject
{
    int _cellType;
    NSString *_iconText;
    NSString *_iconImagePath;
    NSString *_selectedBackImagePath;
    NSString *_markImagePath;
    int _markImagePosition;
    int _selectedImagePosition;
    UIImage *_selectionBackgroundImage;
    UIImage *_markFlagImage;
    struct CGSize _iconSize;
    struct CGSize _iconTextOffset;
    struct CGRect _offsetRect;
}

@property(retain, nonatomic) UIImage *markFlagImage; // @synthesize markFlagImage=_markFlagImage;
@property(retain, nonatomic) UIImage *selectionBackgroundImage; // @synthesize selectionBackgroundImage=_selectionBackgroundImage;
@property(nonatomic) struct CGSize iconTextOffset; // @synthesize iconTextOffset=_iconTextOffset;
@property(nonatomic) int selectedImagePosition; // @synthesize selectedImagePosition=_selectedImagePosition;
@property(nonatomic) struct CGRect backImageOffsetRect; // @synthesize backImageOffsetRect=_offsetRect;
@property(nonatomic) int markImagePosition; // @synthesize markImagePosition=_markImagePosition;
@property(copy, nonatomic) NSString *markImagePath; // @synthesize markImagePath=_markImagePath;
@property(copy, nonatomic) NSString *selectedBackImagePath; // @synthesize selectedBackImagePath=_selectedBackImagePath;
@property(copy, nonatomic) NSString *iconImagePath; // @synthesize iconImagePath=_iconImagePath;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(copy, nonatomic) NSString *iconText; // @synthesize iconText=_iconText;
@property(nonatomic) int cellType; // @synthesize cellType=_cellType;
- (void).cxx_destruct;
- (void)describeInfo;

@end

