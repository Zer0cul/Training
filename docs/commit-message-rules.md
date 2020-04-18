#Scope and Policy
This policy is applied to all Yard Management System git repositories. if the other does not mentor in repository readme.md. Following these rules makes easy reading history and creating pull requests comments. Let's make our history nice and easy to read!

#General rules
1. Limit the subject line to 50 characters.
2. Capitalize only the first letter in the subject line.
3. Don't put a period at the end of the subject line.
4. Put a blank line between the subject line and the body.
5. Wrap the body at 72 characters.
6. Use the imperative mood.
7. Describe what was done and why, but not how.

Be short, smart, impressive certain and obvious, just help your colleagues easy understand what this commit does.

Sources:
[How to write a Git commit message properly with examples](https://www.theserverside.com/video/Follow-these-git-commit-message-guidelines)
[How to Write a Git Commit Message](https://chris.beams.io/posts/git-commit/)

#Formal rule
<Verb> <subject of changes> <new line char>
<new line char>
<Work item type> <#nnnn>.<what and why is done by the commit>

the space in this rule means 'space' character and it is mandatory especially for #nnnn part. in the other case, DevOps integration can't recognize link commit and work item.
Description of each place holder is bellow
##<Verb>
Theses typical verb must be your first word in the commit message. Mandatory - it is not optional.
- Add
- Change
- Configure
- Delete
- Move
- Merge
- Rebase
- Rename
- Refactor
- Setup
- Update
- Rework

Use imperative form only! General rule 6.
##Exampes
**Adding** //BAD
**Configuring** //BAD
**Deleted** //BAD
**Add** //GOOD
**Rename** //GOOD
**Delete** //GOOD
#<Subject of changes>
Use General rule 1,2,4. Be short but impressive, certain and obvious.
###Examples
**Add App.config**  // bad. short but not impressive
**Add something that I don't remember what exactly** // bad. still short, impressive enough but not certain and obvious.
**Update The Main Progrm file.** // bad. Due rules 2, and 3 violation. short, impressive enought, almost certain and obvious. better is "Update main program initialization procedure"
**Change application configuration file** // short enough and impressive, certain and obvious
**Add missing application configuration** // good short and impressive, certain and obvious

##<new line char>
Obvious means newline characters depend on system '\n'. In Visual Studio or in most other git tools you just press "Enter"

Please, do not forget about rule 4. Just type 'Enter' twice after the first line of the commit message to make reviewers and history readers happy!
###Examples
"Rename the queue configuration setting

...blah-blah-blah" //GOOD Well formed first line and two <new line> after that.

"Renaming Myqueue setting. That located in the App.config. I'm not sure that I'm doing in the right way now. Probably, we need to discuss it next month after rainy Tuesday when cancer will produce a sound." 
// BAD. Never ever write such commit messages. Rules 1, 2, 3, 4, 5, 7 are violated. Long, uncertain, not obvious, noisy message, give a little piece of information at the beginning only.

##<Work item type> and <#nnnn>
They both usually are come together.
###<Work item type> 
is definitely come from Azure DevOps board and sprints. They are:
- Task
- Bug
- Product backlog item (PB)
- Epic
- User Story
- even pull request (PR)

I propose to use three of these types only
- Task
- Bug
- even pull request (PR)

Because Product backlog(PB), Epic, User Story are containers for the Task and Bugs. The commit is a small piece of work usually referred to or related to the tasks of bug. Exceptions are Pull Request to the master branch that can include a bunch of commits related to User Story or Epic.

Well, for the second part of the commit message is the nature of the committed work supposed to be referenced. it's always good to have a link.
###<#nnnn>
We put a number of Task, Bug, Product backlog, and any other Azure DevOps item just after '#' character. 
Don't be fooled! The commit message
"Add notification implementation in the accounting module

Task#42 ..." does not create a link for task #42! because of no space between 'Task' and '#' character. 
In the other hand 
"Add notification implementation in the accounting module

Task #42. Brand new ISuperSpeedNotification interface implementation..." It will work fine! You may see how it works just reading the article. For the second message, Azure DevOps automatically created a link. Just here on the wiki page!

###Where I should put this stuff <Work item type> and <#nnnn>?
Anywhere by the context of your commit message but **not in the first line**!
Why?
Remember, **the subject** is a first-line readable and clear.
Task number is not a subject. It's a source or cause for the commit but not a subject.
Just look at the sample commit message that you got from 'git log' console command

"Change #42

The asynchronous pattern of the button1_click handler ..."

Let's try to understand what was changed just read the first line... 
On the human language this commit contains the changes for the task or bug or product backlog with #42, it can by Title, Description, or priority. I hope you catch the idea. 
For the reader from outside the Azure DevOps system almost impossible to understand what was changed by the commit. 

##<what and why is done by the commit>
I know how it can be hard. Bear in your mind two questions only 'WHAT? and 'WHY?'. 
Be short. Nobody reads your version of 'War and Peace' in the commit message. 
'small commits' produces 'small commit messages'. How to make small logical commit it's another topic of discussion.

Practice re-read your message and try to understand is your message answers on the question "Why other developers will want to pull this commit in its personal repository or branch?"
Avoid omitting this part of your commit message. Think about yourself, after a few months you have made the commit with a huge re-factoring job contains dozen of files. Would you like to get a short description of why you made this re-factoring and what exactly done without parsing those pile of changed files? Ah?
#Quick Summary
The good commit message started with a verb in the imperative form. Following the subject of changes not longer than 50 symbols. Press 'Enter' twice. Then explain what was this commit does or why it should be applied to the branch/system/repository. Reference for a particular item with a '#' symbol. The work item type is good by it still optional. Try to stay in 72 charts per line. Be sort, smart, obvious and cerian.

That's all. Happy merging!
