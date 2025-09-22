## Initial Git Configuration:
```bash
git config --global user.name "Your Name"
git config --global user.email "your@email.com"
```

## Clone the Repository
```bash
git clone https://github.com/amhajii/Cheetah_2025.git
```

## Add

To add all files:

```bash
git add .
```


## Committ

```bash
git commit -m "A short description of your changes"
```


## Push 

```bash
git commit -m "A short description of your changes"
```

<br>
<br>

---







# Simple Guide to Working with Git and GitHub 
This guide is for those who have no prior experience with Git and GitHub and want to manage their project.

---

## 1. Install Git

1. Go to [git-scm.com](https://git-scm.com/download/win).
2. Download and run the installer (default settings are fine).
3. After installation, open **Git Bash**.

---

## 2. Initial Git Configuration

Set your name and email:

```bash
git config --global user.name "Your Name"
git config --global user.email "your@email.com"
```

---

## 3. Creating a New Repository

In your project folder (in Git Bash):

```bash
git init
```

---

## 4. Adding Files to the Repository

To add all files:

```bash
git add .
```

---

## 5. Committing Changes

```bash
git commit -m "A short description of your changes"
```

---

## 6. Creating a Repository on GitHub

1. Go to [github.com](https://github.com) and sign up or log in.
2. Click the `New repository` button.
3. Enter your project name and click `Create repository`.

---

## 7. Connecting Local Repository to GitHub

Copy your repository URL from GitHub and run:

```bash
git remote add origin https://github.com/username/repo-name.git
```

---

## 8. Pushing Your Project to GitHub

For the first time:

```bash
git branch -M main
git push -u origin main
```

For later pushes:

```bash
git push
```

---

## 9. Pulling the Latest Changes from GitHub

```bash
git pull
```

---

## 10. Cloning a Repository (Downloading a Project from GitHub)

```bash
git clone https://github.com/username/repo-name.git
```

---

## Important Tips

- Always run `git pull` before starting new work to get the latest changes.
- After making changes, always do `add`, `commit`, and finally `push`.
- If you have questions, search online.  
  Example: "Git tutorial for beginners"

---

## More Resources

- [Simple Git and GitHub Tutorial (Faradars, Persian)](https://faradars.org/courses/fvgit9608-git)
- [Official Git Documentation](https://git-scm.com/book/en/v2)

Good luck! 🚀