//
//  DetailViewController.h
//  SQLiteDemo
//
//  Created by Candice on 16/3/15.
//  Copyright © 2016年 Candice. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

