/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol ALPCustomDataPickerDelegate <NSObject>
-(void)customDataPickerContactsBtnDidSelected:(id)customDataPickerContactsBtn;
-(id)customDataPicker:(id)picker cityNameAtIndex:(int)index;
-(id)customDataPicker:(id)picker userNameAtIndex:(int)index;
-(id)customDataPicker:(id)picker phoneNumberAtIndex:(int)index;
-(id)titleForNoMsg;
-(int)numberOfCustomDataPicker:(id)customDataPicker;
@optional
-(void)phoneNumberRegularAlert;
-(BOOL)phoneNumberRegularExpression:(id)expression;
-(void)customDataPicker:(id)picker deletedItemAtIndex:(int)index;
-(void)customDataPickerDidCancel:(id)customDataPicker;
-(void)customDataPicker:(id)picker didSeletctedItem:(id)item;
-(void)customDataPicker:(id)picker didSeletctedIndex:(int)index;
@end

