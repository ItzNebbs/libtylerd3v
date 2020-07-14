#import <Preferences/PSListController.h>
#import <Preferences/PSSpecifier.h>
#import "TDDiscordCell.h"
#import "TDTwitterCell.h"
#import <spawn.h>

@interface TDListController : PSListController
{
	NSArray *_allSpecifiers;
	BOOL _hideApplyButton;
}
- (NSString *)plistName;
- (NSString *)title;
- (void)applyModificationsToSpecifiers:(NSMutableArray *)specifiers;
- (void)removeDisabledGroups:(NSMutableArray *)specifiers;
- (void)apply:(id)sender;
@end