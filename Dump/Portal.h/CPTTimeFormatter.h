/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSDateFormatter;

@interface CPTTimeFormatter : XXUnknownSuperclass {
@private
	NSDateFormatter* dateFormatter;
	NSDate* referenceDate;
}
@property(copy, nonatomic) NSDate* referenceDate;
@property(retain, nonatomic) NSDateFormatter* dateFormatter;
-(id)stringForObjectValue:(id)objectValue;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(id)initWithDateFormatter:(id)dateFormatter;
-(id)init;
@end

