/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import "TBXML.h"

@class NSMutableArray;

@interface APXML : TBXML {
	NSMutableArray* xmlArray;
}
@property(retain, nonatomic) NSMutableArray* xmlArray;
-(void)recurrence:(TBXMLElement*)recurrence array:(id)array;
-(void)dealUnknow:(id)unknow;
-(BOOL)load:(id)load;
-(id)filter:(id)filter;
-(id)init;
-(void)dealloc;
@end
