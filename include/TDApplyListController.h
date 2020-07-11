#import <Preferences/PSListController.h>
#import <Preferences/PSSpecifier.h>
#import <TDLinkCell.h>
#import <spawn.h>

@interface TDApplyListController : PSListController
{
	NSArray *_allSpecifiers;
}
- (NSString *)plistName;
- (NSString *)title;
- (void)applyModificationsToSpecifiers:(NSMutableArray *)specifiers;
- (void)removeDisabledGroups:(NSMutableArray *)specifiers;
- (void)apply:(id)sender;
@end