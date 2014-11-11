/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DTSchemeHandler.h"

@class NSMutableDictionary;

@interface DTWebContentSchemeHandler : DTSchemeHandler {
@private
	NSMutableDictionary* webContentRelations;
}
@property(retain, nonatomic) NSMutableDictionary* webContentRelations;
+(id)suffix:(id)suffix;
+(BOOL)isAlipassFileExisted:(id)existed;
+(BOOL)canHandleOpenURL:(id)url;
-(void).cxx_destruct;
-(BOOL)handleOpenURL:(id)url userInfo:(id)info;
-(id)init;
@end

