/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"


@protocol ALPPickerDelegate <UIPickerViewDataSource, UIPickerViewDelegate>
-(void)selectedPickerView:(id)view;
-(void)cancelPickerView:(id)view;
@end
