/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface PLCrashReportProcessorInfo : XXUnknownSuperclass {
@private
	int _typeEncoding;
	unsigned long long _type;
	unsigned long long _subtype;
}
@property(readonly, assign, nonatomic) unsigned long long subtype;
@property(readonly, assign, nonatomic) unsigned long long type;
@property(readonly, assign, nonatomic) int typeEncoding;
-(id)initWithTypeEncoding:(int)typeEncoding type:(unsigned long long)type subtype:(unsigned long long)subtype;
@end

