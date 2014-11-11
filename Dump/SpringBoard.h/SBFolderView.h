//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class SBFolder, SBFolderIconListView, SBFolderTextField, UIImageView, UILabel;

@interface SBFolderView : UIView <UITextFieldDelegate>
{
    SBFolder *_folder;
    UILabel *_label;
    SBFolderTextField *_textField;
    SBFolderIconListView *_iconListView;
    UIView *_backgroundView;
    BOOL _isEditing;
    UIImageView *_shadows[12];
    unsigned int _rows;
    CDStruct_d18cc6b1 _notchInfo;
    int _orientation;
}

- (void)_placeShadows;
- (void)_placeShadow:(int)arg1;
- (id)_shadowForPosition:(int)arg1;
- (id)_shadowImageForPosition:(int)arg1;
- (id)editTitleField;
- (void)setBackgroundAlpha:(float)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (struct _NSRange)textField:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange)arg2 toCharacterRange:(struct _NSRange)arg3;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)enableShiftForFolderTextFieldAfterBeginEditing;
- (void)setIsEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)canEditTitle;
- (void)_placeBars;
- (void)_placeBackgroundView;
- (void)_placeLabelAndTextField;
- (void)setFolderName:(id)arg1;
- (float)_labelVerticalInset;
- (float)_labelHorizontalInset;
- (void)setFolder:(id)arg1;
- (void)dealloc;
- (id)iconListView;
- (void)_placeIconListView;
- (void)setScrollOffset:(id)arg1;
- (id)scrollOffset;
- (BOOL)isScrolling;
- (void)noteGrabbedIconLocation:(struct CGPoint)arg1;
- (void)noteHasGrabbedIcon:(id)arg1;
- (void)setIconListView:(id)arg1;
- (void)_createInitialIconViews;
- (struct CGRect)rectForNotchLinen;
- (Class)notchViewClass;
- (unsigned int)rows;
- (void)didDropIconView;
- (void)prepareToDropIconView:(id)arg1 targetFolderBounds:(struct CGRect *)arg2;
- (void)cleanUpAfterOrientationChange;
- (void)setRows:(unsigned int)arg1 notchInfo:(CDStruct_d18cc6b1)arg2 orientation:(int)arg3;
- (void)prepareToSetOrientation:(int)arg1;
- (struct CGSize)_sizeForCurrentConfiguration;
- (float)_contentHeightForCurrentConfiguration;
- (float)_contentHeightForRows:(unsigned int)arg1;
- (void)_setupFolderTitleLabel;
- (void)_setupBackgroundView;
- (void)_setupNavigationBar;
- (id)initWithFrame:(struct CGRect)arg1;

@end

