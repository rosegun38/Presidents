//
//  LanguageListController.h
//  Presidents
//
//  Created by apple on 14/11/11.
//  Copyright (c) 2014年 Jason Ma. All rights reserved.
//

#import <UIKit/UIKit.h>
@class DetailViewController;

@interface LanguageListController : UITableViewController
@property (weak, nonatomic) DetailViewController *detailViewController;
@property (copy, nonatomic) NSArray *languageNames;
@property (copy, nonatomic) NSArray *languageCodes;

@end
