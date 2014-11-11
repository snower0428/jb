/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ALPInputCardBlockDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, UIView, UILabel, ALPTextFieldTitleCell, KABAOPRODElementOption;
@protocol ALPAddBankClickIdTypesDelegate;

@interface CardHolderBlock : XXUnknownSuperclass <ALPInputCardBlockDelegate> {
	UIView* _footerView;
	BOOL _isCert;
@private
	ALPTextFieldTitleCell* _holderCell;
	ALPTextFieldTitleCell* _idValueCell;
	UILabel* _idTypeChoseLabel;
	NSArray* _certTypes;
	id<ALPAddBankClickIdTypesDelegate> _idTypesDelegate;
	KABAOPRODElementOption* _selectedIdType;
}
@property(retain, nonatomic) KABAOPRODElementOption* selectedIdType;
@property(assign, nonatomic) __weak id<ALPAddBankClickIdTypesDelegate> idTypesDelegate;
@property(retain, nonatomic) NSArray* certTypes;
@property(retain, nonatomic) UILabel* idTypeChoseLabel;
@property(retain, nonatomic) ALPTextFieldTitleCell* idValueCell;
@property(retain, nonatomic) ALPTextFieldTitleCell* holderCell;
+(id)buildCommonType;
-(void).cxx_destruct;
-(id)footerForBlock;
-(void)createFooterView;
-(id)blockCell:(id)cell atIndex:(int)index;
-(float)cellHeight:(int)height;
-(int)cellCount;
-(void)fillValue:(id)value;
-(BOOL)hasText;
-(id)isValid;
-(void)resignFirstResponse;
-(void)updateIdType:(id)type;
-(id)initWithCardHolder:(id)cardHolder isCerted:(BOOL)certed certTypes:(id)types;
@end
